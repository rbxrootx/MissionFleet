// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587972A0 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_587972a0_587972A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CE 9E 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587972ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 66: jge 0x58797338
        __asm _emit 0x7d
        __asm _emit 0x66
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x587972e1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 57: jmp 0x58797338
        __asm _emit 0xeb
        __asm _emit 0x57
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 20h
        ; Exact mapped bytes 75 45: jne 0x58797334
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 81 55 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 E1 5A 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 02: jmp 0x58797336
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58797338
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x587972c1
        __asm _emit 0xeb
        __asm _emit 0x89
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
