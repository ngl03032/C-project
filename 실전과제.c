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
		// 왼쪽 트리는 항상 하나가 존재
		this.content = (left.content < right.content) ? left.content : right.content;
		this.value = left.value + right.value;
		this.left = left;
		this.right = right;
	}

	public int compareTo(Object arg)
	{
		Node other = (Node)arg;
		// 우선순위 매기기
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
		//빈도 수 저장할 배열 선언(아스키코드 첨부터 끝까지)
		int[] frequency = new int['~' - '!' + 1];
		//TreeSet을 이용(자동정렬)
		TreeSet<Node> trees = new TreeSet<Node>();
		String str;
		char a;


		// 문자 빈도 측정
		for (int i = 0; i < fileContents.length(); i++)
		{
			char ch = fileContents.charAt(i);
			if ((ch >= '!') && (ch <= '~'))
				++frequency[ch - '!'];
		}

		// 초기 트리
		for (int i = 0; i < '~' - '!' + 1; i++)
		{
			if (frequency[i] > 0)
			{
				Node n = new Node((char)('!' + i), frequency[i]);
				trees.add(n);
			}
		}
		//헤프만 알고리즘
		while (trees.size() > 1)
		{
			Node tree1 = (Node)trees.first();
			trees.remove(tree1);
			Node tree2 = (Node)trees.first();
			trees.remove(tree2);

			Node merged = new Node(tree1, tree2);
			trees.add(merged);
		}
		// 결과트리출력
		if (trees.size() > 0)
		{
			Node theTree = (Node)trees.first();

			Node.printTree(theTree);
		}
		else
			System.out.println("이 파일은 잘못된 문자를 가지고 있습니다.");
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
				//java.util.regex.PatternSyntaxException 이 특수문자때문에 발생하므로 해당 문자 제거해줌
				if (i == 31)continue;
				if (i == 40)continue;
				if (i == 44)continue;
				if (i == 28)continue;
				str = str.replaceAll(Node.Ch[i], Node.Code[i]);
			}
			afterSize = str.length();
			System.out.println(str);
			System.out.println("변환전 사이즈 : " + beforeSize);
			System.out.println("변환후 사이즈 : " + afterSize / 8);
			System.out.println("압축률 : " + (100.0 - (double)(afterSize / 8) / beforeSize * 100));
		}
		catch (Exception e) {
			System.out.println(e.toString());

		}
	}
}
*/

#include <stdio.h>
