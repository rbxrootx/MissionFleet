// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004203E0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_004203e0_004203E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b5b2h
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
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 64h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 30 0D FE FF: call 0x40114a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        push 64h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 0F FE FF: call 0x401398
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 74 14 FE FF: call 0x4018c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 64h
        cmp ebp, esp
        ; Exact mapped bytes E8 83 49 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
