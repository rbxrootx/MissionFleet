// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509BD0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_58509bd0_58509BD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588809e0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 58 17 00 00: call 0x5850b370
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x58509c71
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 E1 DF F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdf
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 2
        ; Exact mapped bytes 74 3D: je 0x58509c71
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 9A 20 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 33 1E 00 00: call 0x5850ba80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 1B: jne 0x58509c71
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        push 0
        push 4
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C0 26 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 06: jmp 0x58509c79
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}
