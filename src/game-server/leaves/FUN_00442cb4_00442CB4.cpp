// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442CB4 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00442cb4_00442CB4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aeech
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
        sub esp, 60h
        push edi
        push ecx
        lea edi, [ebp - 6ch]
        mov ecx, 18h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 6ch], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0fff0h
        cmp eax, 10h
        ; Exact mapped bytes 75 28: jne 0x442d19
        __asm _emit 0x75
        __asm _emit 0x28
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 57 F4 FF FF: call 0x442150
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 20 DA 0A 00: call 0x4f0728
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 09 35 00 00: call 0x446220
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x442d29
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 86 AD 0F 00: call 0x53daaf
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xad
        __asm _emit 0x0f
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
        pop edi
        add esp, 6ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A2 5A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
