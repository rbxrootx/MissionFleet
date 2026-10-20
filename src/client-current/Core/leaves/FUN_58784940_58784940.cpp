// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784940 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58784940_58784940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 1
        push 0e0h
        ; Exact mapped bytes E8 A7 C6 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, 180h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 BE C6 0A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        push 0e0h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 E8 7E 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        imul edx, dword ptr [ebp + 10h], 180h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 CD 7E 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
