// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004904E3 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004904e3_004904E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 14: jle 0x49050b
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1a2h
        push 5ca644h
        ; Exact mapped bytes E8 FA 44 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49050b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4904ef
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x49052d
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1a3h
        push 5ca644h
        ; Exact mapped bytes E8 D8 44 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49052d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x490511
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x490544
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 1D: jg 0x490569
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        cmp ecx, dword ptr [ebp + 10h]
        sete dl
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        ; Exact mapped bytes EB D2: jmp 0x49053b
        __asm _emit 0xeb
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
