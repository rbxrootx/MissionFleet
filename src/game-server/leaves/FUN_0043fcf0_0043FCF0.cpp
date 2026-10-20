// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043FCF0 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_0043fcf0_0043FCF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a6ebh
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4138h
        ; Exact mapped bytes E8 FD AA 01 00: call 0x45a825
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ce8h
        ; Exact mapped bytes E8 6E 8B 01 00: call 0x4588a8
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38a8h
        ; Exact mapped bytes E8 76 86 01 00: call 0x4583c2
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3468h
        ; Exact mapped bytes E8 0C 81 01 00: call 0x457e6a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3028h
        ; Exact mapped bytes E8 A2 7B 01 00: call 0x457912
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2be8h
        ; Exact mapped bytes E8 38 76 01 00: call 0x4573ba
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 27a8h
        ; Exact mapped bytes E8 5F 71 01 00: call 0x456ef3
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2368h
        ; Exact mapped bytes E8 86 6C 01 00: call 0x456a2c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1f28h
        ; Exact mapped bytes E8 AD 67 01 00: call 0x456565
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19f8h
        ; Exact mapped bytes E8 A8 46 01 00: call 0x454472
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15b8h
        ; Exact mapped bytes E8 52 41 01 00: call 0x453f2e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1178h
        ; Exact mapped bytes E8 79 3C 01 00: call 0x453a67
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d38h
        ; Exact mapped bytes E8 39 38 01 00: call 0x453639
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8d0h
        ; Exact mapped bytes E8 54 2B 01 00: call 0x452966
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 480h
        ; Exact mapped bytes E8 AE 0B 01 00: call 0x4509d2
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 13 F9 00 00: call 0x44f746
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0x00
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 89 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
