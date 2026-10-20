// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587828C0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_587828c0_587828C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 74: jne 0x58782950
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3fch], 0
        ; Exact mapped bytes 74 68: je 0x58782950
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3fch]
        ; Exact mapped bytes E8 AA 31 D1 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x58782950
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 40 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5878292f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 3fch]
        ; Exact mapped bytes E8 99 A6 D0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 40 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 85 A6 D0 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 21: jne 0x58782950
        __asm _emit 0x75
        __asm _emit 0x21
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 35 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3f4h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 91 35 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
