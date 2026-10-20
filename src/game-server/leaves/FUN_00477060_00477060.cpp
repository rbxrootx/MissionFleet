// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477060 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_00477060_00477060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8D 0A 00 00: call 0x477b20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC FA FF FF: call 0x476b80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C3 F9 FF FF: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x4770e8
        __asm _emit 0x75
        __asm _emit 0x32
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 62 13 00 00: call 0x478420
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6C 01 00 00: call 0x477230
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        ; Exact mapped bytes E8 89 84 FA FF: call 0x41f560
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4770e8
        __asm _emit 0x75
        __asm _emit 0x08
        lea edx, [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x4770f7
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C FA FF FF: call 0x476b80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CC 16 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
