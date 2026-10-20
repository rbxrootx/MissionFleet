// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3350 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_584e3350_584E3350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 19: jne 0x584e337b
        __asm _emit 0x75
        __asm _emit 0x19
        push 200h
        ; Exact mapped bytes E8 D6 DC 34 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], edx
        push 200h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes E8 82 9A 36 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5889c39ch
        push 200h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes E8 45 DA FC FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA AD FE FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 EF 15 FA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        add ecx, 109h
        mov eax, dword ptr [ebp - 28h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7E 22 2D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
