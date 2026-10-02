// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FE50 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_5857fe50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883b60h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], ecx
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 D8 23 F0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [eax], 588aa82ch
        lea ecx, [ebp - 98h]
        push ecx
        ; Exact mapped bytes E8 39 D1 23 00: call 0x587bcff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd1
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        lea edx, [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 EA AD FB FF: call 0x5853acb0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xad
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 B4 56 90 58: mov eax, dword ptr [0x589056b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 7C 9E FB FF: call 0x58539d50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        push 58962240h
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 C6 68 FB FF: call 0x585367b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 60h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 9ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 1E 11 2B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x2b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
