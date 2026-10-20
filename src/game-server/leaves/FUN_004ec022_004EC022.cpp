// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC022 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004ec022_004EC022() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0f3h
        push 5c7dd4h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 22 F1 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x4ec04b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x4ec0c3
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 69 03 00 00: call 0x4ec3c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        div dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 08: jmp 0x4ec07d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3E: je 0x4ec0c1
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 75 51 04 00: call 0x531208
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4ec0b9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E FD FF FF: call 0x4ebdf0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x4ec0c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB B4: jmp 0x4ec075
        __asm _emit 0xeb
        __asm _emit 0xb4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
