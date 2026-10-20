// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441030 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_00441030_00441030() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ab49h
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
        ; Exact mapped bytes E8 DC 7F 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 04 78 5D 00 00: cmp dword ptr [0x5d7804], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x4410ae
        __asm _emit 0x75
        __asm _emit 0x3a
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 00 07 00 00: call 0x441780
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 04 78 5D 00: mov dword ptr [0x5d7804], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 78 5D 00: mov eax, dword ptr [0x5d7804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 60 02 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D 04 78 5D 00: mov ecx, dword ptr [0x5d7804]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 6B 02 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 15 08 78 5D 00: mov edx, dword ptr [0x5d7808]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 1
        ; Exact mapped bytes 89 15 08 78 5D 00: mov dword ptr [0x5d7808], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes A1 04 78 5D 00: mov eax, dword ptr [0x5d7804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 06 00 00: call 0x441780
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B 00 00 00: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B 00 00 00: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 80 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x80
        __asm _emit 0x08
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
        ; Exact mapped bytes E8 C0 76 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
