// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474E30 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00474e30_00474E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 67e228h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 76 61: jbe 0x474ea9
        __asm _emit 0x76
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 73 56: jae 0x474ea9
        __asm _emit 0x73
        __asm _emit 0x56
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 75 48: jne 0x474ea5
        __asm _emit 0x75
        __asm _emit 0x48
        mov edx, dword ptr [ebp + 8]
        and edx, 0fffh
        xor eax, eax
        add eax, 100h
        cmp edx, eax
        ; Exact mapped bytes 72 34: jb 0x474ea5
        __asm _emit 0x72
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0fffff000h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 100h
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        sar ecx, 4
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        ; Exact mapped bytes EB 17: jmp 0x474ebc
        __asm _emit 0xeb
        __asm _emit 0x17
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x474ebc
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 67e228h
        ; Exact mapped bytes 75 83: jne 0x474e3d
        __asm _emit 0x75
        __asm _emit 0x83
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
