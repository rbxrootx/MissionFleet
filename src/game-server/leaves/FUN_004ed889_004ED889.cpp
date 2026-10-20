// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED889 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_004ed889_004ED889() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4ed8ab
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 36 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x4ed8d2
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 FC FF FF: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 51 B7 FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
