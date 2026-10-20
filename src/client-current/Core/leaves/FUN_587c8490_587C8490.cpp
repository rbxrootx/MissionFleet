// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8490 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_587c8490_587C8490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 8E AD 00 00 00: jle 0x587c8550
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 0F 8F 9E 00 00 00: jg 0x587c8550
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 8E 94 00 00 00: jle 0x587c8550
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 0F 8F 85 00 00 00: jg 0x587c8550
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x587c84d8
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x587c84e5
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 7E 09: jle 0x587c84f9
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 7E 09: jle 0x587c850d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp + 14h], edx
        push 64h
        push 0
        lea eax, [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 F6 48 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 68h], 64h
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 68h]
        push edx
        push 1000400h
        push 0
        push 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
