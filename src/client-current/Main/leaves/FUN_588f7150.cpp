// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7150 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588f7150() {
    __asm {
        sub esp, 3ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 38h], eax
        push esi
        mov eax, ecx
        push edi
        mov byte ptr [eax + 60h], 1
        mov eax, dword ptr [eax + 6ch]
        lea esi, [eax + 64h]
        mov ecx, 8
        lea edi, [esp + 1ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 4C 24 48: mov cx, word ptr [esp + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        push 0
        ; Exact mapped bytes 66 89 4C 24 16: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x16
        push 22h
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        movzx eax, byte ptr [eax + 60h]
        mov edx, 14h
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 54 24 1C: mov word ptr [esp + 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 1ch]
        push eax
        push edx
        push 80017102h
        ; Exact mapped bytes E8 C0 9A 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 40h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 1D 5A 08 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 3ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
