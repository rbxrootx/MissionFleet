// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056CE91 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0056ce91_0056CE91() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 68eh
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B2 E2 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 9B 2F F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56ced3
        __asm _emit 0x75
        __asm _emit 0x14
        push 68fh
        push 5d053ch
        ; Exact mapped bytes E8 32 7B FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ced3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56ceae
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 70 2F F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56cefe
        __asm _emit 0x75
        __asm _emit 0x14
        push 690h
        push 5d053ch
        ; Exact mapped bytes E8 07 7B FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cefe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56ced9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 75 02: jne 0x56cf12
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x56cf4d
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 694h
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        push ecx
        ; Exact mapped bytes E8 35 E2 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 04 01 00 00: call dword ptr [edx + 0x104]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
