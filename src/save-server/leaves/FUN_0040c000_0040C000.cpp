// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C000 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_0040c000_0040C000() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a9f0h
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
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 4C 57 FF FF: call 0x40178f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 BB 51 FF FF: call 0x401221
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 1A: jmp 0x40c085
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 55 56 FF FF: call 0x4016d1
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        ; Exact mapped bytes E8 9B 98 05 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
    }
}
