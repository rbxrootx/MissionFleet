// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA430 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_584ba430_584BA430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5F CE FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 44 FD FF FF: call 0x584ba1b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD DA FC FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        add edx, 48h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
