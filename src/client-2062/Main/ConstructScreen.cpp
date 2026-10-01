// Reconstructed from FUN_1004db50 pseudocode and disassembly; every direct
// call is named and its mapped target is checked by tools/verify_client_matches.py.
struct Screen { Screen* ConstructScreen(void*); };
extern "C" void InitializeScreenBase();
extern "C" void AllocateObjectThunk();
extern "C" void InitializeRowControl();
extern "C" void AttachByLayer();
extern "C" void AttachControlList();
extern "C" void CreateFullScreenControl();
extern "C" void CreateLogoControl();
extern "C" void CreateOverlayControl();
#pragma comment(linker, "/alternatename:_InitializeScreenBase=?Initialize@ScreenBase@@QAEPAU1@PAXHHHHG@Z")

__declspec(naked) Screen* Screen::ConstructScreen(void*) {
    __asm {
        ; Preserve the function's SEH frame and initialize the inherited screen state.
        push -1
        push 1016ea2eh
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
        push esi
        push edi
        xor ebx, ebx
        push 40h
        push ebx
        push ebx
        push ebx
        mov esi, ecx
        push ebx
        push eax
        mov dword ptr [esp + 24h], esi
        call InitializeScreenBase
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 100h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5ch], ebx
        push 70h
        mov dword ptr [esp + 1ch], ebx
        ; Exact immediate encoding: mov dword ptr [esi], 10175b48h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0x10
        ; First of seven renderer label rows; each uses the shared row initializer.
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 20h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 18h], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        je short L_1004DBF4
        ; Exact immediate encoding: mov ecx, dword ptr [101c5698h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 20h
        push 0c8h
        push 14h
        push 0ah
        push ecx
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x02
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DBF6
L_1004DBF4:
        xor edi, edi
L_1004DBF6:
        ; Exact immediate encoding: mov dword ptr [101c5934h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov edx, dword ptr [101c5934h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        mov ebp, 1
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [edx + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c5934h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DC2E
        push edi
        call AttachByLayer
L_1004DC2E:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DC3B
        push edi
        call AttachControlList
L_1004DC3B:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x03
        je short L_1004DC93
        ; Exact immediate encoding: mov eax, dword ptr [101c5698h]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 2ch
        push 0c8h
        push 20h
        push 0ah
        push eax
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DC95
L_1004DC93:
        xor edi, edi
L_1004DC95:
        ; Exact immediate encoding: mov dword ptr [101c5930h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov ecx, dword ptr [101c5930h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [ecx + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c5930h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DCC7
        push edi
        call AttachByLayer
L_1004DCC7:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DCD4
        push edi
        call AttachControlList
L_1004DCD4:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x05
        je short L_1004DD2D
        ; Exact immediate encoding: mov edx, dword ptr [101c5698h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 38h
        push 0c8h
        push 2ch
        push 0ah
        push edx
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DD2F
L_1004DD2D:
        xor edi, edi
L_1004DD2F:
        ; Exact immediate encoding: mov dword ptr [101c592ch], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov eax, dword ptr [101c592ch]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [eax + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c592ch]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DD60
        push edi
        call AttachByLayer
L_1004DD60:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DD6D
        push edi
        call AttachControlList
L_1004DD6D:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x07
        je short L_1004DDC6
        ; Exact immediate encoding: mov ecx, dword ptr [101c5698h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 44h
        push 0c8h
        push 38h
        push 0ah
        push ecx
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DDC8
L_1004DDC6:
        xor edi, edi
L_1004DDC8:
        ; Exact immediate encoding: mov dword ptr [101c5928h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov edx, dword ptr [101c5928h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [edx + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c5928h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DDFA
        push edi
        call AttachByLayer
L_1004DDFA:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DE07
        push edi
        call AttachControlList
L_1004DE07:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x09
        je short L_1004DE5F
        ; Exact immediate encoding: mov eax, dword ptr [101c5698h]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 50h
        push 0c8h
        push 44h
        push 0ah
        push eax
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 0ah
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0a
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DE61
L_1004DE5F:
        xor edi, edi
L_1004DE61:
        ; Exact immediate encoding: mov dword ptr [101c5924h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov ecx, dword ptr [101c5924h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [ecx + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c5924h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DE93
        push edi
        call AttachByLayer
L_1004DE93:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DEA0
        push edi
        call AttachControlList
L_1004DEA0:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 0bh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x0b
        je short L_1004DEF9
        ; Exact immediate encoding: mov edx, dword ptr [101c5698h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 5ch
        push 0c8h
        push 50h
        push 0ah
        push edx
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 0ch
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0c
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DEFB
L_1004DEF9:
        xor edi, edi
L_1004DEFB:
        ; Exact immediate encoding: mov dword ptr [101c5920h], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov eax, dword ptr [101c5920h]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [eax + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c5920h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DF2C
        push edi
        call AttachByLayer
L_1004DF2C:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DF39
        push edi
        call AttachControlList
L_1004DF39:
        push 70h
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 0dh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x0d
        je short L_1004DF92
        ; Exact immediate encoding: mov ecx, dword ptr [101c5698h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 68h
        push 0c8h
        push 5ch
        push 0ah
        push ecx
        push esi
        mov ecx, edi
        call InitializeRowControl
        push 80h
        ; Exact immediate encoding: mov byte ptr [esp + 20h], 0eh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0e
        ; Exact immediate encoding: mov dword ptr [edi], 10175338h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        call AllocateObjectThunk
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        jmp short L_1004DF94
L_1004DF92:
        xor edi, edi
L_1004DF94:
        ; Exact immediate encoding: mov dword ptr [101c591ch], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [edi + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov edx, dword ptr [101c591ch]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [edx + 68h], ebp
        ; Exact immediate encoding: mov edi, dword ptr [101c591ch]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        pop ebp
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 7ff8h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x7f
        cmp ecx, ebx
        je short L_1004DFC7
        push edi
        call AttachByLayer
L_1004DFC7:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004DFD4
        push edi
        call AttachControlList
L_1004DFD4:
        push 0a080h
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        ; After the label rows, create the 800x600 background control.
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 20h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 18h], 0fh
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x0f
        je short L_1004E012
        push 2710h
        push 258h
        push 320h
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call CreateFullScreenControl
        jmp short L_1004E014
L_1004E012:
        xor eax, eax
L_1004E014:
        ; Exact immediate encoding: mov dword ptr [101c56ech], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [eax + 24h], -10h
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact immediate encoding: mov eax, dword ptr [101c56ech]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 18h], bl
        or byte ptr [eax + 24h], 2
        ; Exact immediate encoding: mov edi, dword ptr [101c56ech]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        ; Exact immediate encoding: mov word ptr [edi + 26h], 2710h
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        cmp ecx, ebx
        je short L_1004E045
        push edi
        call AttachByLayer
L_1004E045:
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        je short L_1004E052
        push edi
        call AttachControlList
L_1004E052:
        push 60h
        ; Create the zero-position logo control.
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 20h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 18h], 10h
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x10
        je short L_1004E075
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call CreateLogoControl
        jmp short L_1004E077
L_1004E075:
        xor eax, eax
L_1004E077:
        ; Exact immediate encoding: mov dword ptr [101c58fch], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: and word ptr [eax + 24h], -2
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1440h
        mov byte ptr [esp + 1ch], bl
        ; Create the overlay object, then finalize screen state.
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 20h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 18h], 11h
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x11
        je short L_1004E0A9
        mov ecx, eax
        call CreateOverlayControl
        jmp short L_1004E0AB
L_1004E0A9:
        xor eax, eax
L_1004E0AB:
        mov ecx, dword ptr [esp + 10h]
        ; Store the screen's final three state fields and restore the exception chain.
        ; Exact immediate encoding: mov dword ptr [101c58dch], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: mov dword ptr [esi + 70h], 64h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 78h], ebx
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
        ret 4
    }
}
