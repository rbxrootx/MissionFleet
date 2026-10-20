// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D140 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5848d140_5848D140() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 FE 44 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 09: jne 0x5848d162
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5848d164
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5848d164
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
