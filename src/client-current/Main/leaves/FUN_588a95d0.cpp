// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A95D0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_588a95d0() {
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
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 8B 96 84 00 00 00: mov dx, word ptr [esi + 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 48 08: xor cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 2B D1: sub dx, cx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 54 24 04: mov word ptr [esp + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        xor edx, edx
        push edx
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 24 0A: mov word ptr [esp + 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0a
        push 6
        lea ecx, [esp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 66 89 54 24 18: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [eax]
        push edx
        push 8001020ch
        ; Exact mapped bytes E8 47 76 0C 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 90 35 0D 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
