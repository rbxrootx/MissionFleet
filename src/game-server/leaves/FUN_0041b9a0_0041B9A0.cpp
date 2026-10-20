// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B9A0 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_0041b9a0_0041B9A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579de9h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6C D6 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 34 2F 5D 00 00: cmp dword ptr [0x5d2f34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x41ba1e
        __asm _emit 0x75
        __asm _emit 0x3a
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 0D 00 00: call 0x41c750
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 34 2F 5D 00: mov dword ptr [0x5d2f34], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 2F 5D 00: mov eax, dword ptr [0x5d2f34]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 50 F5 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D 34 2F 5D 00: mov ecx, dword ptr [0x5d2f34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 4B F5 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 15 38 2F 5D 00: mov edx, dword ptr [0x5d2f38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 1
        ; Exact mapped bytes 89 15 38 2F 5D 00: mov dword ptr [0x5d2f38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes A1 34 2F 5D 00: mov eax, dword ptr [0x5d2f34]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x41c750
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3B 05 00 00: call 0x41bf90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5B 05 00 00: call 0x41bfc0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A4 D6 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 50 CD 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
