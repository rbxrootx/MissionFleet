// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005500CD .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_005500cd_005500CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 182h
        push 67bf90h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 74 A1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x550116
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x550175
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 18bh
        push 67bf90h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 37 A1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 29 F8 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 18fh
        push 67bf90h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 19 A1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 636f38h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C A0 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55016c
        __asm _emit 0x75
        __asm _emit 0x14
        push 190h
        push 67bf90h
        ; Exact mapped bytes E8 D9 8B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55016c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x550147
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
