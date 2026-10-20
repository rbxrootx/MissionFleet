// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568EC0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_00568ec0_00568EC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fbc9h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC ED F8 FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 4A 06 00 00: call 0x569540
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 50 CE FC FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a63ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 0
        push 3
        ; Exact mapped bytes E8 AB ED FD FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D D8 EC 5D 00 00: cmp dword ptr [0x5decd8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x568f73
        __asm _emit 0x75
        __asm _emit 0x3b
        push 2
        push 58a620h
        push 58a618h
        ; Exact mapped bytes FF 15 58 23 5E 00: call dword ptr [0x5e2358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 E0 EC 5D 00: mov dword ptr [0x5dece0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0c8h
        push 58a62ch
        push 58a618h
        ; Exact mapped bytes FF 15 58 23 5E 00: call dword ptr [0x5e2358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 DC EC 5D 00: mov dword ptr [0x5decdc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 D8 EC 5D 00 01 00 00 00: mov dword ptr [0x5decd8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes E8 92 EE FD FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        push 35h
        push 5cffc8h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D6 21 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ret
    }
}
