// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F2C0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_5867f2c0_5867F2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 40000000h
        ; Exact mapped bytes 75 56: jne 0x5867f328
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b0h]
        ; Exact mapped bytes E8 D0 57 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x5867f2fc
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b0h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 5B EB FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b4h]
        ; Exact mapped bytes E8 A6 57 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x5867f326
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B 5B EB FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x5867f380
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 52: jne 0x5867f380
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b0h]
        ; Exact mapped bytes E8 74 57 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5867f357
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b0h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 5B EB FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2b4h]
        ; Exact mapped bytes E8 4B 57 EB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5867f380
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 01 5B EB FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
