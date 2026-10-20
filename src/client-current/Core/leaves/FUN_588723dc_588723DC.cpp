// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588723DC .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_588723dc_588723DC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 58 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [ebp + 28h]
        lea eax, [ebp - 0ch]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 DF FD FF FF: call 0x588721ef
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x58872423
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        leave
        ret
    }
}
