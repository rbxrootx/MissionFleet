// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AB56 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5883ab56_5883AB56() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 B4 EE C6 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov eax, esi
        mov dword ptr [esi + 18h], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
