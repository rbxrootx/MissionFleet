// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BA77 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_5887ba77_5887BA77() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5887ba99
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 E5 69 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 16 55 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        leave
        ret
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 12: jne 0x5887bab3
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 C9 69 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 FA 54 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5887bab8
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 72 04: jb 0x5887babc
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 45: jmp 0x5887bb01
        __asm _emit 0xeb
        __asm _emit 0x45
        push dword ptr [ebp + 10h]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 10 C2 FD FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        lea edx, [esi - 1]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 1C: je 0x5887baef
        __asm _emit 0x74
        __asm _emit 0x1c
        dec edx
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 0A: ja 0x5887bae3
        __asm _emit 0x77
        __asm _emit 0x0a
        movzx eax, byte ptr [edx]
        test byte ptr [eax + ecx + 19h], 4
        ; Exact mapped bytes 75 F0: jne 0x5887bad3
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, esi
        sub eax, edx
        mov edx, esi
        and eax, 1
        sub edx, eax
        dec edx
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x5887baff
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        pop esi
        leave
        ret
    }
}
