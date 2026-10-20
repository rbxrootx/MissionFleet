// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005894C0 .. +0x8B bytes.
extern "C" __declspec(naked) void __1COleObjectFactory__UAE_XZ_005894C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ef8ch
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 63b8e4h
        mov dword ptr [ebp - 4], 0
        push 49h
        push 67aea0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 62 0D F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 45 00 00 00: call 0x58954b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 71 FB FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        ; Exact mapped bytes E8 65 98 FB FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 8C D7 FB FF: call 0x546cb0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        ; Exact mapped bytes E8 7E 99 FB FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9E D8 F4 FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0xff
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
