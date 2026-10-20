// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506270 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00506270_00506270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 3ffffffeh
        ; Exact mapped bytes 72 13: jb 0x506296
        __asm _emit 0x72
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 1C AD 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 13 FF FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
