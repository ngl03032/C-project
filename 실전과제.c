/*
import java.io.*;
import java.util.*;

class Node implements Comparable
{
	public  int     value;
	public  char    content;
	private Node    left;
	private Node    right;
	public static String a = "";
	public static String[] Ch = new String[55];
	public static String[] Code = new String[55];
	public static int i = 0;
	public static int k = 0;r

	public Node(char content, int value)
	{
		this.content = content;
		this.value = value;
	}

	public Node(Node left, Node right)
	{
		// ���� Ʈ���� �׻� �ϳ��� ����
		this.content = (left.content < right.content) ? left.content : right.content;
		this.value = left.value + right.value;
		this.left = left;
		this.right = right;
	}

	public int compareTo(Object arg)
	{
		Node other = (Node)arg;
		// �켱���� �ű��
		if (this.value == other.value)
			return this.content - other.content;

		else
			return this.value - other.value;
	}
	private void printNode(String path)
	{

		if ((left == null) && (right == null)) {
			System.out.println(content + " " + path);
			Ch[i] = String.valueOf(content);
			i++;
			Code[k] = path;
			k++;
		}
		if (left != null) {
			left.printNode(path + '0');
		}
		if (right != null) {
			right.printNode(path + '1');
		}
	}
	public static void printTree(Node tree)
	{
		tree.printNode("");

	}
}

public class Huffman
{
	public static void main(String[] args) throws IOException
	{
		FileReader in = null;
		String str = null;
		int c;
		in = new FileReader("hc.txt");
		while ((c = in.read()) != -1) {
			str += (char)c;
		}
		HuffmanAlgor(str);
		Change();
	}

	private static void HuffmanAlgor(String fileContents)
	{
		//�� �� ������ �迭 ����(�ƽ�Ű�ڵ� ÷���� ������)
		int[] frequency = new int['~' - '!' + 1];
		//TreeSet�� �̿�(�ڵ�����)
		TreeSet<Node> trees = new TreeSet<Node>();
		String str;
		char a;


		// ���� �� ����
		for (int i = 0; i < fileContents.length(); i++)
		{
			char ch = fileContents.charAt(i);
			if ((ch >= '!') && (ch <= '~'))
				++frequency[ch - '!'];
		}

		// �ʱ� Ʈ��
		for (int i = 0; i < '~' - '!' + 1; i++)
		{
			if (frequency[i] > 0)
			{
				Node n = new Node((char)('!' + i), frequency[i]);
				trees.add(n);
			}
		}
		//������ �˰���
		while (trees.size() > 1)
		{
			Node tree1 = (Node)trees.first();
			trees.remove(tree1);
			Node tree2 = (Node)trees.first();
			trees.remove(tree2);

			Node merged = new Node(tree1, tree2);
			trees.add(merged);
		}
		// ���Ʈ�����
		if (trees.size() > 0)
		{
			Node theTree = (Node)trees.first();

			Node.printTree(theTree);
		}
		else
			System.out.println("�� ������ �߸��� ���ڸ� ������ �ֽ��ϴ�.");
	}

	private static void Change() throws IOException {
		int c;
		int beforeSize;
		int afterSize;
		String str = "";
		FileInputStream in = new FileInputStream("hc.txt");
		while ((c = in.read()) != -1) {
			str += (char)c;
		}
		in.close();
		beforeSize = str.length();

		System.out.println(str);

		try {
			for (int i = 0; i < 55; i++) {
				//java.util.regex.PatternSyntaxException �� Ư�����ڶ����� �߻��ϹǷ� �ش� ���� ��������
				if (i == 31)continue;
				if (i == 40)continue;
				if (i == 44)continue;
				if (i == 28)continue;
				str = str.replaceAll(Node.Ch[i], Node.Code[i]);
			}
			afterSize = str.length();
			System.out.println(str);
			System.out.println("��ȯ�� ������ : " + beforeSize);
			System.out.println("��ȯ�� ������ : " + afterSize / 8);
			System.out.println("����� : " + (100.0 - (double)(afterSize / 8) / beforeSize * 100));
		}
		catch (Exception e) {
			System.out.println(e.toString());

		}
	}
}
*/

#include <stdio.h>
