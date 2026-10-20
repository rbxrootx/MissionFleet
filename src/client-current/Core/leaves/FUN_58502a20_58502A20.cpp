// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502A20 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58502a20_58502A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        or eax, 7
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58502a3c
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 31: jmp 0x58502a6d
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 1
        mov eax, dword ptr [ebp + 10h]
        sub eax, edx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 05: jbe 0x58502a50
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 1D: jmp 0x58502a6d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        shr ecx, 1
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B8 6E FA FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
