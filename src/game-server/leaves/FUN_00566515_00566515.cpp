// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566515 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_00566515_00566515() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0d0h
        push 5d0c78h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2F 4C F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 B6 FE FF: call 0x551c3a
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x566551
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x566594
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 38: je 0x56658f
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 9ch
        push edx
        ; Exact mapped bytes E8 EC AC FC FF: call 0x531256
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x56658f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 FD FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
