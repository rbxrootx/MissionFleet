// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884CF6A .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5884cf6a_5884CF6A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 1ch]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 18h]
        mov edx, dword ptr [edi + 0ch]
        mov esi, edx
        mov ebx, dword ptr [edi + 10h]
        mov dword ptr [ebp - 4], edx
        test ecx, ecx
        ; Exact mapped bytes 78 2D: js 0x5884cfb3
        __asm _emit 0x78
        __asm _emit 0x2d
        imul eax, edx, 14h
        add ebx, 8
        add eax, ebx
        mov ebx, dword ptr [ebp + 10h]
        cmp edx, -1
        ; Exact mapped bytes 74 3D: je 0x5884cfd3
        __asm _emit 0x74
        __asm _emit 0x3d
        sub eax, 14h
        dec edx
        cmp dword ptr [eax - 4], ebx
        ; Exact mapped bytes 7D 04: jge 0x5884cfa3
        __asm _emit 0x7d
        __asm _emit 0x04
        cmp ebx, dword ptr [eax]
        ; Exact mapped bytes 7E 05: jle 0x5884cfa8
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp edx, -1
        ; Exact mapped bytes 75 07: jne 0x5884cfaf
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, dword ptr [ebp - 4]
        dec ecx
        mov dword ptr [ebp - 4], edx
        test ecx, ecx
        ; Exact mapped bytes 79 DE: jns 0x5884cf91
        __asm _emit 0x79
        __asm _emit 0xde
        inc edx
        cmp esi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 77 1A: ja 0x5884cfd3
        __asm _emit 0x77
        __asm _emit 0x1a
        cmp edx, esi
        ; Exact mapped bytes 77 16: ja 0x5884cfd3
        __asm _emit 0x77
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        pop edi
        mov dword ptr [eax + 0ch], esi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        pop ebx
        leave
        ret
        ; Exact mapped bytes E8 38 57 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
