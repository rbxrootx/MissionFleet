// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586780 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_58586780_58586780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 23ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 218h], ecx
        mov byte ptr [ebp - 221h], 0
        push 0
        ; Exact mapped bytes FF 15 EC 44 89 58: call dword ptr [0x588944ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp - 220h]
        push eax
        ; Exact mapped bytes FF 15 80 40 89 58: call dword ptr [0x58894080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 21ch], eax
        xor ecx, ecx
        mov dword ptr [ebp - 214h], ecx
        mov dword ptr [ebp - 210h], ecx
        mov dword ptr [ebp - 20ch], ecx
        mov dword ptr [ebp - 208h], ecx
        lea edx, [ebp - 214h]
        push edx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 B8 44 89 58: call dword ptr [0x588944b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20ch]
        sub ecx, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 22ch], ecx
        mov edx, dword ptr [ebp - 208h]
        sub edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        ; Exact mapped bytes FF 15 98 40 89 58: call dword ptr [0x58894098]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 230h], eax
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 234h], eax
        push 0cc0020h
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 22ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 B4 40 89 58: call dword ptr [0x588940b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 40 89 58: call dword ptr [0x588940c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 220h]
        push edx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 E8 44 89 58: call dword ptr [0x588944e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 218h]
        mov byte ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 218h]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 CB 00 F0 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 238h], ecx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 EC F5 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 23ch], eax
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 4D FE FF FF: call 0x58586760
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0
        push 588aabf4h
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 5
        push ecx
        push 588aac04h
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes E8 14 EF FF FF: call 0x58585850
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        ; Exact mapped bytes E8 3E F9 FF FF: call 0x58586290
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5858695b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EB A6 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa6
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
    }
}
