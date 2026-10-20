// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C974C .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004c974c_004C974C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 29 FE FF FF: call 0x4c958b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes E8 1A FE FF FF: call 0x4c958b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4c97b4
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0a5h
        push 674970h
        ; Exact mapped bytes E8 91 F5 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c97b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c9797
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4c97cb
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 FC FF FF: call 0x4c94bf
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
