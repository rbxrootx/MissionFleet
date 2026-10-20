// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043EEA3 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_0043eea3_0043EEA3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aa45h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 1ch], ecx
        push -1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 50 C3 04 00: call 0x48b22f
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 05: je 0x43eeed
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 4F: jmp 0x43ef3c
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 132h
        push 5b6084h
        push 934h
        ; Exact mapped bytes E8 32 E1 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x43ef25
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 77 00 00: call 0x446710
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x43ef2c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 90 98 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
