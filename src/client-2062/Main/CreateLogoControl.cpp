// Reconstructed from FUN_100fd890 disassembly; direct calls are named and
// checked against the mapped target.
extern "C" void InitializeCommon();
extern "C" void AttachByLayer();
extern "C" void AttachControlList();

extern "C" __declspec(naked) void CreateLogoControl() {
    __asm {
        push -1
        push 101746f8h
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edi
        mov esi, ecx
        push ebx
        push eax
        mov dword ptr [esp + 24h], esi
        call InitializeCommon
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 100h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 5ch], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40h]
        ; Exact immediate encoding: mov dword ptr [esp + 18h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact immediate encoding: mov dword ptr [esi], 101766e8h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov word ptr [esi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        je short L_100FD902
        push esi
        call AttachByLayer
L_100FD902:
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        je short L_100FD90F
        push esi
        call AttachControlList
L_100FD90F:
        mov ecx, dword ptr [esp + 10h]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret 0ch
    }
}
