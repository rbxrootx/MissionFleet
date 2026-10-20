// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C860 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_5878c860_5878C860() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fb90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 AC CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 FB FF FF: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B4 F7 FF FF: call 0x5878c060
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F9 F7 FF FF: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 49 A6 CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E FB FF FF: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 10: jne 0x5878c8fa
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3E FB FF FF: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 18: jmp 0x5878c912
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2E FB FF FF: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
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
        ret
    }
}
