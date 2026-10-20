// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500140 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_58500140_58500140() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ff30h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 3e9h
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 4B 71 FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 38h], 0
        push 588a341ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 92 73 FC FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        push 104h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 2F CC 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xcc
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 24 42 89 58: call dword ptr [0x58894224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
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
        ret
    }
}
