// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F0070 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_585f0070_585F0070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 1B 69 E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x69
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 400h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 59 E9 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        push 2ceh
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 6D EC FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 78 75 94 58: mov edx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 54 FA FF: call 0x58595570
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 48 FF FF: call 0x585e4960
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2c8h], 0fah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2cch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2dch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2e0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2e8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ech], 0
        push 29ch
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 55 1C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 9C 75 94 58 00: mov byte ptr [0x5894759c], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 35 90 58 FF FF FF FF: mov dword ptr [0x58903560], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        push 0
        push 5894777ch
        ; Exact mapped bytes E8 32 CC 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2f4h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
