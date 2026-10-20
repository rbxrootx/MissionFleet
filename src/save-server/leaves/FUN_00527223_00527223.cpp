// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527223 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_00527223_00527223() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 1B C2 F7 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x527263
        __asm _emit 0x75
        __asm _emit 0x14
        push 18eh
        push 6345f0h
        ; Exact mapped bytes E8 E2 1A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527263
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x52723e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 52 FA FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        or edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
