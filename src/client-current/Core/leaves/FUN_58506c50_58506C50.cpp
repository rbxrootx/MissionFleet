// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506C50 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_58506c50_58506C50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888066dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C FB FF FF: call 0x58506800
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 D5 46 00 00: call 0x5850b370
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58506cab
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 4], 0
        ; Exact mapped bytes EB 53: jmp 0x58506cfe
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 C5 58 00 00: call 0x5850c580
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x58506cd5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E3 05 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 75 09: jne 0x58506cde
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 4], 1
        ; Exact mapped bytes EB 20: jmp 0x58506cfe
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FA 44 00 00: call 0x5850b1e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 78 46 00 00: call 0x5850b370
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 4], al
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
