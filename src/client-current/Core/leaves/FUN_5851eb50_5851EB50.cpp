// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EB50 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5851eb50_5851EB50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 B9 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 B9 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F6 FC FF FF: call 0x5851e890
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
