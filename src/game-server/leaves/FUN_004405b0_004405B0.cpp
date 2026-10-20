// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004405B0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004405b0_004405B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A FE FF FF: call 0x440410
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB FD FF FF: call 0x4403c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C FE FF FF: call 0x440450
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 81 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
