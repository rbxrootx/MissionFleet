// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FCA30 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_588fca30() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 8], eax
        mov edx, dword ptr [esp + 14h]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [esp + 1], ecx
        ; Exact mapped bytes 66 89 4C 24 05: mov word ptr [esp + 5], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x05
        mov byte ptr [esp + 7], cl
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esp], ecx
        mov dword ptr [esp + 4], edx
        xor ecx, ecx
        push 0
        ; Exact mapped bytes 66 89 88 94 00 00 00: mov word ptr [eax + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 98h], 1
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 8
        lea edx, [esp + 8]
        push edx
        push 0
        mov ecx, 7dh
        push 0
        ; Exact mapped bytes 66 89 88 94 00 00 00: mov word ptr [eax + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 80015106h
        ; Exact mapped bytes E8 CD 41 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        xor ecx, esp
        ; Exact mapped bytes E8 2C 01 08 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
