// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004907B8 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_004907b8_004907B8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x4907db
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x4907e7
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 E7 05 00: call 0x4eefce
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
