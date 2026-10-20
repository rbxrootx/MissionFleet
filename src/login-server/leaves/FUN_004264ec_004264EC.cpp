// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004264EC .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_004264ec_004264EC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 4C FF 44 00 00: cmp dword ptr [0x44ff4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 75 1D: jne 0x426517
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        cmp eax, 61h
        ; Exact mapped bytes 0F 8C AF 00 00 00: jl 0x4265b5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7ah
        ; Exact mapped bytes 0F 8F A6 00 00 00: jg 0x4265b5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 20h
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x4265b5
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        cmp ebx, 100h
        ; Exact mapped bytes 7D 28: jge 0x42654a
        __asm _emit 0x7d
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0C: jle 0x426537
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 2
        push ebx
        ; Exact mapped bytes E8 D1 C1 FF FF: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0B: jmp 0x426542
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [eax + ebx*2]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x42654a
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ebx
        ; Exact mapped bytes EB 6B: jmp 0x4265b5
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 15 C0 AC 44 00: mov edx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr [edx + ecx*2 + 1], 80h
        ; Exact mapped bytes 74 0E: je 0x42656d
        __asm _emit 0x74
        __asm _emit 0x0e
        and byte ptr [ebp + 0ah], 0
        mov byte ptr [ebp + 8], al
        mov byte ptr [ebp + 9], bl
        push 2
        ; Exact mapped bytes EB 09: jmp 0x426576
        __asm _emit 0xeb
        __asm _emit 0x09
        and byte ptr [ebp + 9], 0
        mov byte ptr [ebp + 8], bl
        push 1
        pop eax
        lea ecx, [ebp - 4]
        push 1
        push 0
        push 3
        push ecx
        push eax
        lea eax, [ebp + 8]
        push eax
        push 200h
        ; Exact mapped bytes FF 35 4C FF 44 00: push dword ptr [0x44ff4c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 E3 FF FF: call 0x4248aa
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 A9: je 0x426546
        __asm _emit 0x74
        __asm _emit 0xa9
        cmp eax, 1
        ; Exact mapped bytes 75 06: jne 0x4265a8
        __asm _emit 0x75
        __asm _emit 0x06
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes EB 0D: jmp 0x4265b5
        __asm _emit 0xeb
        __asm _emit 0x0d
        movzx eax, byte ptr [ebp - 3]
        movzx ecx, byte ptr [ebp - 4]
        shl eax, 8
        or eax, ecx
        pop ebx
        leave
        ret
    }
}
