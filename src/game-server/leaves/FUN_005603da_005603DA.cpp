// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005603DA .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_005603da_005603DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x56041a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 35: jmp 0x56044f
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [eax + eax + 2]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 88 93 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 64 C3 F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 0
        push 362h
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 74 B7 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea esp, [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
