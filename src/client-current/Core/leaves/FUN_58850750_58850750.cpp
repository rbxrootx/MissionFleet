// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850750 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58850750_58850750() {
    __asm {
        push ebx
        push esi
        push edi
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        push ebp
        push edx
        push eax
        push ecx
        push ecx
        push 588507f0h
        ; Exact mapped bytes 64 FF 35 00 00 00 00: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov ebx, dword ptr [eax + 8]
        mov ecx, dword ptr [esp + 2ch]
        xor ebx, dword ptr [ecx]
        mov esi, dword ptr [eax + 0ch]
        cmp esi, -2
        ; Exact mapped bytes 0F 84 46 00 00 00: je 0x588507e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        cmp edx, -2
        ; Exact mapped bytes 74 08: je 0x588507ac
        __asm _emit 0x74
        __asm _emit 0x08
        cmp esi, edx
        ; Exact mapped bytes 0F 86 35 00 00 00: jbe 0x588507e1
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [esi + esi*2]
        lea ebx, [ebx + esi*4 + 10h]
        mov ecx, dword ptr [ebx]
        mov dword ptr [eax + 0ch], ecx
        cmp dword ptr [ebx + 4], 0
        ; Exact mapped bytes 0F 85 C0 FF FF FF: jne 0x58850782
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 101h
        mov eax, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 51 FF FF FF: call 0x58850720
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 1
        mov eax, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 64 FF FF FF: call 0x58850740
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A1 FF FF FF: jmp 0x58850782
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 64 8F 05 00 00 00 00: pop dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        ret
    }
}
