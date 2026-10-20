// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D0050 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_587d0050() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 9C 95 0B 00: call 0x58889600
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edi, [ebx + 3bch]
        lea edx, [ebx + 2f4h]
        mov dword ptr [esp + 10h], 19h
        ; Exact mapped bytes EB 06: jmp 0x587d0080
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 160h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [edx - 190h]
        mov esi, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub esi, 1
        ; Exact mapped bytes 75 ED: jne 0x587d00a0
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [edx]
        mov ecx, ebp
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [ebx + 420h]
        mov esi, 2
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub esi, 1
        ; Exact mapped bytes 75 ED: jne 0x587d00d3
        __asm _emit 0x75
        __asm _emit 0xed
        add edi, 4
        add edx, 8
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 8D: jne 0x587d0080
        __asm _emit 0x75
        __asm _emit 0x8d
    }
}
