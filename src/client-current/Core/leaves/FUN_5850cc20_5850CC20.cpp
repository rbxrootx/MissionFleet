// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CC20 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_5850cc20_5850CC20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880b6dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        ; Exact mapped bytes E8 1C 55 F9 FF: call 0x584a2170
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 4C A6 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 10h
        push eax
        ; Exact mapped bytes E8 37 A6 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 18 02 00 00: call 0x5850ceb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 15 A1 F7 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 FF A0 F7 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 E9 A0 F7 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax + 0dh], 0
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
