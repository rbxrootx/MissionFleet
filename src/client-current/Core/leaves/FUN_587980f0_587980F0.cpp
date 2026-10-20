// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587980F0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_587980f0_587980F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 02: jne 0x5879811c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x5879815d
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C FE CE FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E4 FD CE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 30 F4 FF FF: call 0x58797580
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
